/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRoadSignArtwork : NSObject {
    float _contentScale;
    struct CGSize { 
        float width; 
        float height; 
    } _layoutSize;
    struct __CTLine { } *_line;
    BOOL _onRoute;
    int _orientation;
    float _scale;
}

- (void)_updateLayoutSize;
- (void)dealloc;
- (id)image;
- (id)initWithString:(id)arg1 orientation:(int)arg2 contentScale:(float)arg3 scale:(float)arg4 onRoute:(BOOL)arg5;
- (struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; })localCollisionBounds;
- (struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; })localRenderBounds;
- (struct Matrix<float, 2, 1> { float x1[2]; })offsetPixelForPixel:(struct Matrix<float, 2, 1> { float x1[2]; })arg1;

@end
