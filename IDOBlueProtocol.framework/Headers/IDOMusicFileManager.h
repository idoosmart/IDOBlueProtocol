//
//  IDOMusicFileManager.h
//  IDOBlueProtocol
//
//  Created by hedongyang on 2021/9/13.
//  Copyright © 2021 何东阳. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <IDOBlueProtocol/IDOMusicInfoModel.h>

NS_ASSUME_NONNULL_BEGIN

@protocol IDOMusicFileManagerDelegate <NSObject>
@optional
//操作音乐回调状态
- (void)operatMusicFileReplyErrorCode:(int)errorCode;
//获取音乐信息回调数据
- (void)getMusicFileInfoReplyModel:(IDOMusicInfoModel *)model
                         errorCode:(int)errorCode;
//传输进度 0-100
- (void)musicFileTransferProgress:(float)progress;

//传输完成 非0为错误
- (void)musicFileTransferComplete:(int)errorCode;

@end

@interface IDOMusicFileManager : NSObject
//音乐操作代理对象
@property (nonatomic,weak)id<IDOMusicFileManagerDelegate> delegate;
//音乐集合
@property (nonatomic,strong) NSArray<IDOMusicFileTransferModel *>* models;
//单例对象初始化
+ (instancetype)shareInstance;
//添加音乐文件
+ (BOOL)addMusicFile:(IDOMusicFileModel *)model;
//删除音乐文件
+ (BOOL)deleteMusicFile:(IDOMusicFileModel *)model;
//新建歌单(只创建歌单，不关联歌曲)
+ (BOOL)addMusicFolder:(IDOMusicDirectoryModel *)model;
//删除歌单
+ (BOOL)deleteMusicFolder:(IDOMusicDirectoryModel *)model;
//修改歌单名称(只能修改歌单名称，其他歌单关联的歌曲不能被修改)
+ (BOOL)reviseMusicFolderName:(IDOMusicDirectoryModel *)model;
//导入歌单
+ (BOOL)importMusicFolder:(IDOMusicDirectoryModel *)model
                musicFile:(IDOMusicFileModel *)music;
//从歌单删除歌曲(歌曲和歌单解除关系，不是实质删除歌曲文件)
+ (BOOL)deletMusicFromFolder:(IDOMusicDirectoryModel *)model
                   musicFile:(IDOMusicFileModel *)music;
//获取音乐信息
+ (BOOL)getMusicInfo;
//开始传输
- (BOOL)startTransfer;

@end

NS_ASSUME_NONNULL_END
