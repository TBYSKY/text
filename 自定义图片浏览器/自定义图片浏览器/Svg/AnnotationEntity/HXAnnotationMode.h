//
//  HXAnnotationMode.h
//  test
//
//  Created by 孙海平 on 2017/4/19.
//  Copyright © 2017年 孙海平. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef enum {
    HXAnnotationModeTypeNul,//空
    HXAnnotationModeTypeLine,//直线
    HXAnnotationModeTypeArrow,//箭头
    HXAnnotationModeTypeCustom,//画笔
    HXAnnotationModeTypeRectangular,//矩形
    HXAnnotationModeTypeRound,//圆
    HXAnnotationModeTypeRubber,//橡皮
    HXAnnotationModeTypeDrag,//拖
    HXAnnotationModeTypeImage,//图片
    HXAnnotationModeTypeText,//文本
    HXAnnotationModeTypeVoice,//语音
    HXAnnotationModeTypeVideo,//视频
    HXAnnotationModeTypeZoom,//缩放
    
} HXAnnotationModeType;

typedef enum : NSUInteger {
    HXRedColorType,          //红色
    HXOrangeColorType,       //橙色
    HXYellorColorType,       //黄色
    HXGreenColorType,        //绿色
    HXBlueColorType,         //蓝色
    HXPurpleColorType,       //紫色
    HXWhiteColorType,        //白色
    HXGrayColorType,         //灰色
    HXBlackColorType,        //黑色
} HXAnnotationColorType;

@interface HXAnnotationMode : NSObject

@property (nonatomic, strong) NSString * pid;
/**
 是否被选中
 */
@property (nonatomic, assign) BOOL isSelected;
/**
 注释颜色
 */
@property (nonatomic, strong) UIColor * color;

/**
 注释线宽
 */
@property (nonatomic, assign) CGFloat lineWidth;

/**
 注释类型
 */
@property (nonatomic, assign) HXAnnotationModeType type;

/**
 开始点
 */
@property (nonatomic, assign) CGPoint startPoint;

/**
 结束点
 */
@property (nonatomic, assign) CGPoint endPoint;

@property (nonatomic, assign) CGFloat height;

@property (nonatomic, assign) CGFloat width;

/**
 颜色类型
 */
@property (nonatomic, assign) HXAnnotationColorType colorType;

+ (instancetype)annotationModeShare;
@end
