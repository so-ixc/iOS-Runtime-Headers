/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFMagnifyMode : NSObject <BSDescriptionProviding, NSCopying> {
    NSString *_name;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    float _zoomFactor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) struct CGSize { float x1; float x2; } size;
@property (readonly) Class superclass;
@property (nonatomic) float zoomFactor;

+ (id)currentMagnifyMode;
+ (id)magnifyModeWithSize:(struct CGSize { float x1; float x2; })arg1 name:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setZoomFactor:(float)arg1;
- (struct CGSize { float x1; float x2; })size;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (float)zoomFactor;

@end
