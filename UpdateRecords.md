# IDOBlueProtocol.framework 3.40.48
SDK版本更新时间： 2024-12-03

## 优化SDK 
###1.1 增加思澈表盘制作和安装

# IDOBlueProtocol.framework 3.40.29
SDK版本更新时间： 2024-02-25

## 优化SDK 
###1.1 优化SDK
###1.2 修改冲突文件


# IDOBlueProtocol.framework 3.40.27
SDK版本更新时间： 2024-01-25

## 优化SDK 
###1.1 优化SDK



# IDOBlueProtocol.framework 3.40.26
SDK版本更新时间： 2023-09-27

## 优化SD 
###1.1 更新SDK，适配iOS17系统
###1.2 优化SDK



# IDOBlueProtocol.framework 3.40.20
SDK版本更新时间： 2023-03-31


## 更新接口，兼容

###1.1 更新接口setAppRebootCommand
Objc:
```objc

说明：重启接口添加参数设置，默认重启IDOSetRebootModel->type = 0;


#pragma mark ==== 重启 ====
@interface IDOSetRebootModel:IDOBluetoothBaseModel
/*
 0x00:默认 整个设备重启
 0x01:设备蓝牙重启 需要功能表支持(__IDO_FUNCTABLE__.funcTable29Model.reseDeviceBluetooth)
 */
@property (nonatomic,assign) NSInteger type;

@end

/**
 * @brief 控制设备重启(重启设备后手环会马上断线) | Control device restart （The bracelet disconnects immediately after restarting the device）
 * @param model | reboot model
 * @param callback 执行后回调 (errorCode : 0 传输成功,其他值为错误,可以根据 IDOErrorCodeToStr 获取错误码str)
 * Post-execution callback (errorCode : 0 The transfer was successful, the other values are errors, and the error code str can be obtained according to IDOErrorCodeToStr)
 * state 0x00:重启成功 0x02: 失败：设备不支持  | 0x00: success; 0x02: Failed: device does not support
 */
+ (void)setAppRebootCommand:(IDOSetRebootModel*_Nullable)model
                   callback:(void(^_Nullable)(int state, int errorCode))callback;
        
```

## 优化SDK及修复bug

###1.2 优化SDK

