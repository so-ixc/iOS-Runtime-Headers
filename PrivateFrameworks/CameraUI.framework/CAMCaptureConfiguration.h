/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMCaptureConfiguration : NSObject {
    int _HDRMode;
    int _device;
    int _flashMode;
    int _irisMode;
    int _mode;
    int _photoModeEffectFilterType;
    int _squareModeEffectFilterType;
    int _timerDuration;
    int _torchMode;
}

@property (nonatomic, readonly) int HDRMode;
@property (nonatomic, readonly) int device;
@property (nonatomic, readonly) int flashMode;
@property (nonatomic, readonly) int irisMode;
@property (nonatomic, readonly) int mode;
@property (nonatomic, readonly) int photoModeEffectFilterType;
@property (nonatomic, readonly) int squareModeEffectFilterType;
@property (nonatomic, readonly) int timerDuration;
@property (nonatomic, readonly) int torchMode;

+ (int)audioConfigurationForMode:(int)arg1 device:(int)arg2;

- (int)HDRMode;
- (struct CAMCaptureModeWithOptions { int x1; int x2; int x3; int x4; })currentModeWithOptions;
- (int)device;
- (int)flashMode;
- (id)initWithCaptureMode:(int)arg1 captureDevice:(int)arg2 flashMode:(int)arg3 torchMode:(int)arg4 HDRMode:(int)arg5 irisMode:(int)arg6 timerDuration:(int)arg7 photoModeEffectFilterType:(int)arg8 squareModeEffectFilterType:(int)arg9;
- (int)irisMode;
- (int)mode;
- (int)photoModeEffectFilterType;
- (int)squareModeEffectFilterType;
- (int)timerDuration;
- (int)torchMode;

@end