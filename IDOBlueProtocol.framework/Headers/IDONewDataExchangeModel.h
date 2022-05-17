//
//  IDONewDataExchangeModel.h
//  IDOBlueProtocol
//
//  Created by hedongyang on 2022/4/21.
//  Copyright © 2022 何东阳. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface IDONewDataExchangeModel : NSObject<NSCopying>
/**
 日 | day
 */
@property (nonatomic,assign) NSInteger day;
/**
 时 | hour
 */
@property (nonatomic,assign) NSInteger hour;
/**
 分 | minute
 */
@property (nonatomic,assign) NSInteger minute;
/**
 秒 | second
 */
@property (nonatomic,assign) NSInteger second;
/**
 * 运动模式 | Sport mode
 以前运动类型:
 0:无，1:走路，2:跑步，3:骑行，4:徒步，5:游泳，6:爬山，7:羽毛球，8:其他，
 9:健身，10:动感单车，11:椭圆机，12:跑步机，13:仰卧起坐，14:俯卧撑，15:哑铃，16:举重，
 17:健身操，18:瑜伽，19:跳绳，20:乒乓球，21:篮球，22:足球 ，23:排球，24:网球，
 25:高尔夫球，26:棒球，27:滑雪，28:轮滑，29:跳舞，31：室内划船/roller machine， 32：普拉提/pilates， 33:交叉训练/cross train,
 34:有氧运动/cardio，35：尊巴舞/Zumba, 36:广场舞/square dance, 37:平板支撑/Plank, 38:健身房/gym 48:户外跑步，49:室内跑步，
 50:户外骑行，51:室内骑行，52:户外走路，53:室内走路，54:泳池游泳，55:开放水域游泳，56:椭圆机，57:划船机，58:高强度间歇训练法，75:板球运动
 基础运动：
 101：功能性力量训练，102：核心训练，103：踏步机，104：整理放松
 健身（25种）
 110：传统力量训练，112：引体向上，114：开合跳，115：深蹲，116：高抬腿，117：拳击，118：杠铃，119：武术，
 120：太极，121：跆拳道，122：空手道，123：自由搏击，124：击剑，125：射箭，126：体操，127:单杠，128:双杠,129:漫步机,
 130:登山机
 球类:
 131:保龄球,132:台球,133:曲棍球,134:橄榄球,135:壁球,136:垒球,137:手球,138:毽球,139:沙滩足球,
 140:藤球,141:躲避球
 休闲运动
 152:街舞,153:芭蕾,154:社交舞,155:飞盘,156:飞镖,157:骑马,158:爬楼,159:放风筝,
 160:钓鱼
 冰雪运动
 161:雪橇,162:雪车,163:单板滑雪,164:雪上运动,165:高山滑雪,166:越野滑雪,167:冰壶,168:冰球,169:冬季两项
 水上运动（10种）
 170:冲浪,171:帆船,172:帆板,173:皮艇,174:摩托艇,175:划艇,176:赛艇,177:龙舟,178:水球,179:漂流,
 极限运动（5种）
 180:滑板,181:攀岩,182:蹦极,183:跑酷,184:BMX,
 kr01定制项目
 193:Outdoor Fun（户外玩耍）, 194:Other Activity（其他运动）
 */
@property (nonatomic,assign) NSInteger sportType;

@end

#pragma mark ==== app 发起运动开始 ====
@interface IDOAppStartExchangeModel : IDONewDataExchangeModel
/**
 目标类型 | target type
 0x00:无目标， 0x01:重复次数，单位：次，
 0x02:距离,单位：米,  0x03：卡路里, 单位：大卡,
 0x04:时长,单位：分钟, 0x05:  步数, 单位：步
 */
@property (nonatomic,assign) NSInteger targetType;
/**
 目标数值 | target value
 */
@property (nonatomic,assign) NSInteger targetValue;
/**
 是否强制开始 0:不强制,1:强制 | is mandatory start
 */
@property (nonatomic,assign) NSInteger forceStart;

@end

#pragma mark ==== app 发起运动开始回复 ====
@interface IDOAppStartReplyExchangeModel : IDONewDataExchangeModel

/**
 * 0:成功; 1:设备已经进入运动模式失败;2: 设备电量低失败;3:手环正在充电4:正在使用Alexa 5:通话中
 * 0:success 1:into sport mode failed 2:Low power of equipment 3: the bracelet is charging 4:Using Alexa 5:In the call
 */
@property (nonatomic,assign) NSInteger retCode;

@end

#pragma mark ==== app 发起运动结束 ====
@interface IDOAppEndExchangeModel : IDONewDataExchangeModel
/**
 持续时间 (单位:秒钟) | durations
 */
@property (nonatomic,assign) NSInteger durations;
/**
 卡路里 (单位:J) | calories
 */
@property (nonatomic,assign) NSInteger calories;
/**
 距离 (单位:米) | distance
 */
@property (nonatomic,assign) NSInteger distance;
/**
 步数 (单位:步) | step
 */
@property (nonatomic,assign) NSInteger step;
/**
 是否存储 | is save
 */
@property (nonatomic,assign) BOOL isSave;

@end

#pragma mark ==== app 发起运动结束回复 ====
@interface IDOAppEndReplyExchangeModel : IDONewDataExchangeModel
/**
 0:成功; 1:设备已经进入运动模式失败 | 0:success 1:into sport mode failed
 */
@property (nonatomic,assign) NSInteger errorCode;
/**
 卡路里 (单位:J) | calories
 */
@property (nonatomic,assign) NSInteger calories;
/**
 距离 (单位:米) | distance
 */
@property (nonatomic,assign) NSInteger distance;
/**
 步数 (单位:步) | step
 */
@property (nonatomic,assign) NSInteger step;
/**
 平均心率
 */
@property (nonatomic,assign) NSInteger avgHrValue;
/**
 最大心率
 */
@property (nonatomic,assign) NSInteger maxHrValue;
/**
 燃烧脂肪时长
 */
@property (nonatomic,assign) NSInteger burnFatMins;
/**
 有氧时长
 */
@property (nonatomic,assign) NSInteger aerobicMins;
/**
 极限时长
 */
@property (nonatomic,assign) NSInteger limitMins;

@end

#pragma mark ==== app 发起运动暂停回复 ====
@interface IDOAppPauseReplyExchangeModel : IDONewDataExchangeModel
/**
 0:成功; 1:设备已经进入运动模式失败 | 0:success 1:into sport mode failed
 */
@property (nonatomic,assign) NSInteger errorCode;

@end

#pragma mark ==== app 发起运动恢复回复 ====
@interface IDOAppRestoreReplyExchangeModel : IDONewDataExchangeModel
/**
 0:成功; 1:设备已经进入运动模式失败 | 0:success 1:into sport mode failed
 */
@property (nonatomic,assign) NSInteger errorCode;

@end

#pragma mark ==== app 发起运动蓝牙发起结束 ====
@interface IDOBleEndExchangeModel : IDONewDataExchangeModel
/**
 卡路里 (单位:J) | calories
 */
@property (nonatomic,assign) NSInteger calories;
/**
 距离 (单位:米) | distance
 */
@property (nonatomic,assign) NSInteger distance;
/**
 步数 (单位:步) | step
 */
@property (nonatomic,assign) NSInteger step;
/**
 是否存储 | is save
 */
@property (nonatomic,assign) BOOL isSave;
/**
 平均心率 | avg heart rate
 */
@property (nonatomic,assign) NSInteger avgHrValue;
/**
 最大心率 | max heart rate
 */
@property (nonatomic,assign) NSInteger maxHrValue;
/**
 脂肪燃烧时长 (分钟) | burn fat mins (mins)
 */
@property (nonatomic,assign) NSInteger burnFatMins;
/**
 有氧锻炼时长(分钟) | cardiopulmonary exercise mins
 */
@property (nonatomic,assign) NSInteger aerobicMins;
/**
 极限锻炼时长(分钟) | limit exercise mins
 */
@property (nonatomic,assign) NSInteger limitMins;

@end

#pragma mark ==== app 发起运动蓝牙发起结束回复 ====
@interface IDOBleEndReplyExchangeModel : IDONewDataExchangeModel
/**
 持续时间 (单位:秒钟) | durations
 */
@property (nonatomic,assign) NSInteger durations;
/**
 卡路里 (单位:J) | calories
 */
@property (nonatomic,assign) NSInteger calories;
/**
 距离 (单位:米) | distance
 */
@property (nonatomic,assign) NSInteger distance;
/**
 0:成功; 1:设备已经进入运动模式失败 | 0:success 1:into sport mode failed
 */
@property (nonatomic,assign) NSInteger errorCode;

@end

#pragma mark ==== app 发起运动蓝牙发起暂停回复 ====
@interface IDOBlePauseReplyExchangeModel : IDONewDataExchangeModel
/**
 0:成功; 1:设备已经进入运动模式失败 | 0:success 1:into sport mode failed
 */
@property (nonatomic,assign) NSInteger errorCode;

@end

#pragma mark ==== app 发起运动蓝牙发起恢复回复 ====
@interface IDOBleRestoreReplyExchangeModel : IDONewDataExchangeModel
/**
 0:成功; 1:设备已经进入运动模式失败 | 0:success 1:into sport mode failed
 */
@property (nonatomic,assign) NSInteger errorCode;

@end

#pragma mark ==== v3数据交换中 ====
@interface IDOV3AppIngDataExchangeModel : IDONewDataExchangeModel
/**
 持续时间 (单位:秒钟) | durations
 */
@property (nonatomic,assign) NSInteger durations;
/**
 卡路里 (单位:J) | calories
 */
@property (nonatomic,assign) NSInteger calories;
/**
 距离 (单位:米) | distance
 */
@property (nonatomic,assign) NSInteger distance;
/**
 * 信号强弱  0: 表示信号弱， 1: 表示信号强
 * Signal strength 0: means signal is weak, 1: means signal is strong
 */
@property (nonatomic,assign) NSInteger signalFlag;
/**
 * app计算显示实时速度 单位km/h 100倍 15秒一个记录
 * App calculates and displays real-time speed km/h 100 times
 */
@property (nonatomic,assign) NSInteger realTimeSpeed;

@end

#pragma mark ==== v3数据交换中回复 ====
@interface IDOV3AppIngReplyExchangeModel : IDONewDataExchangeModel
/**
 数据版本
 */
@property (nonatomic,assign) NSInteger dataVersion;
/**
 当前心率 | current heart rate
 */
@property (nonatomic,assign) NSInteger curHrValue;
/**
 距离 (单位:米) | distance
 */
@property (nonatomic,assign) NSInteger distance;
/**
 卡路里 (单位:J) | calories
 */
@property (nonatomic,assign) NSInteger calories;
/**
 步数 (单位:步) | step
 */
@property (nonatomic,assign) NSInteger step;
/**
 持续时间 (单位:秒钟) | durations
 */
@property (nonatomic,assign) NSInteger durations;
/**
 * 0x00 : 混合泳; 0x01 : 自由泳; 0x02 : 蛙泳; 0x03 : 仰泳; 0x04 : 蝶泳;
 * 0x00: medley; 0x01: freestyle; 0x02: breaststroke; 0x03: backstroke; 0x04: butterfly stroke;
 */
@property (nonatomic,assign) NSInteger swimPosture;
/**
 status 手环返回的状态 开始:1,暂停:2, 结束:3,0:无效状态
 starts with :1, pauses :2, ends with :3,0: invalid status
 */
@property (nonatomic,assign) NSInteger status;
/**
 平均公里配速
 */
@property (nonatomic,assign) NSInteger kmSpeed;
/**
 * app计算显示实时速度 单位km/h 100倍 15秒一个记录
 * App calculates and displays real-time speed km/h 100 times
 */
@property (nonatomic,assign) NSInteger realTimeSpeed;
/**
 * app计算显示实时配速 单位 s
 * App calculates and displays real-time pace unit second
 */
@property (nonatomic,assign) NSInteger realTimePace;

@end

#pragma mark ==== v2数据交换中 ====
@interface IDOV2AppIngDataExchangeModel : IDONewDataExchangeModel
/**
 flag:0:全部有效, 1:距离无效， 2: gps 信号弱 | status 0:all effective 1:distance invalid 2:gps signal weak
 */
@property (nonatomic,assign) NSInteger flag;
/**
 距离 (单位:米) | distance
 */
@property (nonatomic,assign) NSInteger distance;
/**
 卡路里 (单位:J) | calories
 */
@property (nonatomic,assign) NSInteger calories;
/**
 持续时间 (单位:秒钟) | durations
 */
@property (nonatomic,assign) NSInteger durations;

@end

#pragma mark ==== v2数据交换中回复 ====
@interface IDOV2AppIngReplyExchangeModel : IDONewDataExchangeModel
/**
 status:0:全部有效, 1:距离无效， 2: gps 信号弱 | status 0:all effective 1:distance invalid 2:gps signal weak
 */
@property (nonatomic,assign) NSInteger status;
/**
 当前心率 | current heart rate
 */
@property (nonatomic,assign) NSInteger curHrValue;
/**
 距离 (单位:米) | distance
 */
@property (nonatomic,assign) NSInteger distance;
/**
 卡路里 (单位:J) | calories
 */
@property (nonatomic,assign) NSInteger calories;
/**
 步数 (单位:步) | step
 */
@property (nonatomic,assign) NSInteger step;
/**
 序列号 | heart rate value serial
 */
@property (nonatomic,assign) NSInteger hrValueSerial;
/**
 心率间隔 | heart rate interval
 */
@property (nonatomic,assign) NSInteger intervalSecond;
/**
 心率数据 | heart rate data
 */
@property (nonatomic,strong) NSMutableArray<NSNumber *> * hrValues;

@end

#pragma mark ==== 心率数据交换 ====
@interface IDOHrDataExchangeModel : IDONewDataExchangeModel
/**
 心率间隔 | heart rate interval
 */
@property (nonatomic,assign) NSInteger intervalSecond;
/**
 心率个数
 */
@property (nonatomic,assign) NSInteger heartRateCount;
/**
 心率数据 | heart rate data
 */
@property (nonatomic,strong) NSMutableArray<NSNumber *> * hrValues;

@end

#pragma mark ==== v3运动结束数据交换 ====
@interface IDOV3SportEndDataExchangeModel : IDONewDataExchangeModel
/**
 数据版本
 */
@property (nonatomic,assign) NSInteger dataVersion;
/**
 心率间隔 | heart rate interval
 */
@property (nonatomic,assign) NSInteger intervalSecond;
/**
 步数 (单位:步) | step
 */
@property (nonatomic,assign) NSInteger step;
/**
 卡路里 (单位:J) | calories
 */
@property (nonatomic,assign) NSInteger calories;
/**
 距离 (单位:米) | distance
 */
@property (nonatomic,assign) NSInteger distance;
/**
 持续时间 (单位:秒钟) | durations
 */
@property (nonatomic,assign) NSInteger durations;
/**
 热身锻炼时长(秒钟) | warm up exercise second
 */
@property (nonatomic,assign) NSInteger warmUpSecond;
/**
 无氧锻炼时长(秒钟) | anaeroic exercise second
 */
@property (nonatomic,assign) NSInteger anaeroicSecond;
/**
 燃脂锻炼时长(秒钟) | anaeroic exercise second
 */
@property (nonatomic,assign) NSInteger fatBurnSecond;
/**
 有氧锻炼时长(秒钟) | anaeroic exercise second
 */
@property (nonatomic,assign) NSInteger aerobicSecond;
/**
 极限锻炼时长(秒钟) | anaeroic exercise second
 */
@property (nonatomic,assign) NSInteger limitSecond;
/**
 平均心率 | avg heart rate
 */
@property (nonatomic,assign) NSInteger avgHrValue;
/**
 最大心率 | max heart rate
 */
@property (nonatomic,assign) NSInteger maxHrValue;
/**
 热身运动值
 */
@property (nonatomic,assign) NSInteger warmUpValue;
/**
脂肪燃烧运动值
*/
@property (nonatomic,assign) NSInteger burnFatValue;
/**
有氧运动值
*/
@property (nonatomic,assign) NSInteger aerobicValue;
/**
极限运动值
*/
@property (nonatomic,assign) NSInteger limitValue;
/**
无氧运动值
*/
@property (nonatomic,assign) NSInteger anaerobicValue;
/**
 平均速度 km/h
 */
@property (nonatomic,assign) NSInteger avgSpeed;
/**
 最大速度 km/h
 */
@property (nonatomic,assign) NSInteger maxSpeed;
/**
 平均步频
 */
@property (nonatomic,assign) NSInteger avgStepFrequency;
/**
 最大步频
 */
@property (nonatomic,assign) NSInteger maxStepFrequency;
/**
 平均步幅
 */
@property (nonatomic,assign) NSInteger avgStepStride;
/**
 最大步幅
 */
@property (nonatomic,assign) NSInteger maxStepStride;
/**
 平均公里配速
 */
@property (nonatomic,assign) NSInteger kmSpeed;
/**
 最快公里配速
 */
@property (nonatomic,assign) NSInteger fastKmSpeed;
/**
 公里配速个数
 */
@property (nonatomic,assign) NSInteger kmSpeedCount;
/**
 公里配速集合
 */
@property (nonatomic,strong) NSMutableArray<NSNumber *> * kmSpeeds;
/**
 英里配速 个数
 */
@property (nonatomic,assign) NSInteger mileCount;
/**
 英里配速集合
 */
@property (nonatomic,strong) NSMutableArray<NSNumber *> * mileSpeeds;
/**
 步频个数
 */
@property (nonatomic,assign) NSInteger stepsFrequencyCount;
/**
 步频集合
 */
@property (nonatomic,strong) NSMutableArray<NSNumber *> * stepsFrequencys;
/**
 训练效果；  单位：无   范围 1.0 ~ 5.0 （*10倍）
 */
@property (nonatomic,assign) NSInteger trainingEffect;
/**
 最大摄氧量；  单位：毫升/公斤/分钟； 范围  0-80
 */
@property (nonatomic,assign) NSInteger vo2Max;

@end

#pragma mark ==== 运动计划数据交换 ====
@interface IDOSportPlanDataExchangeModel : IDONewDataExchangeModel
//计划版本号默认0x20
@property (nonatomic,assign) NSInteger planVersion;
//0 表示信号弱， 1：表示信号强
@property (nonatomic,assign) NSInteger signalFlag;
//app 距离
@property (nonatomic,assign) NSInteger distance;
//持续时间
@property (nonatomic,assign) NSInteger duration;
//卡路里
@property (nonatomic,assign) NSInteger calories;
//计划类型：0x01：跑步计划3km ，0x02：跑步计划5km ， 0x03：跑步计划10km ，0x04：半程马拉松训练（二期） ，0x05：马拉松训练（二期）
@property (nonatomic,assign) NSInteger planType;
//app计算显示实时配速 配速uint16_t 单位km/h，100倍
@property (nonatomic,assign) NSInteger realTimeSpeed;

@end

#pragma mark ==== 运动计划数据交换回复 ====
@interface IDOSportPlanDataReplyExchangeModel : IDONewDataExchangeModel
//计划版本号默认0x20
@property (nonatomic,assign) NSInteger planVersion;
//计划类型：0x01：跑步计划3km ，0x02：跑步计划5km ， 0x03：跑步计划10km ，0x04：半程马拉松训练（二期） ，0x05：马拉松训练（二期）
@property (nonatomic,assign) NSInteger planType;
//动作类型  1快走；2慢跑；3中速跑；4快跑  ；5结束课程运动 （还要等待用户是否有自由运动）；6课程结束后自由运动（此字段当operate为0x05起作用）
@property (nonatomic,assign) NSInteger actionType;
//运动倒计时（注：递减）， 或课程结束后计时（（注：递增））   action_type = 1—5时递减  ， action_type = 6递增
@property (nonatomic,assign) NSInteger countHour;
//运动倒计时（注：递减）， 或课程结束后计时（（注：递增））   action_type = 1—5时递减  ， action_type = 6递增
@property (nonatomic,assign) NSInteger countMinute;
//运动倒计时（注：递减）， 或课程结束后计时（（注：递增））   action_type = 1—5时递减  ， action_type = 6递增
@property (nonatomic,assign) NSInteger countSecond;
//心率数据
@property (nonatomic,assign) NSInteger heartRate;
//距离 按照设置的单位数据显示
@property (nonatomic,assign) NSInteger distance;
//app计算显示实时配速 配速uint16_t 单位km/h，100倍
@property (nonatomic,assign) NSInteger realTimeSpeed;
//app计算显示实时配速 配速uint16_t 单位km/h，100倍
@property (nonatomic,assign) NSInteger kmSpeed;
//动态卡路里
@property (nonatomic,assign) NSInteger realTimeCalories;
//步数
@property (nonatomic,assign) NSInteger steps;
//状态 开始 1， 手动暂停 2， 结束 3，  自动暂停 4，   0是无效状态
@property (nonatomic,assign) NSInteger status;
//持续时间 秒钟数据
@property (nonatomic,assign) NSInteger duration;
//实时的配速 s
@property (nonatomic,assign) NSInteger realTimeSpeedPace;
//有氧训练效果等级  单位无  范围 0-50 扩大10倍传输
@property (nonatomic,assign) NSInteger aerobicTraining;
//无氧运动训练效果等级 单位无  范围 0-50 扩大10倍传输
@property (nonatomic,assign) NSInteger anaerobicTraining;

@end

NS_ASSUME_NONNULL_END