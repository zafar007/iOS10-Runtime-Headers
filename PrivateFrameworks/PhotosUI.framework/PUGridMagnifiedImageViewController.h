/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class PUGridMagnifiedView, NSIndexPath;

@interface PUGridMagnifiedImageViewController : UIViewController  {
    BOOL _canShowFullScreen;
    id _delegate;
    NSIndexPath *_itemIndexPath;
    float _magnifiedYOffset;
    int _imageFormat;
    float _shadowRadius;
    float _shadowOpacity;
    PUGridMagnifiedView *_magnifiedView;
    struct CGPoint { 
        float x; 
        float y; 
    } _gestureWindLocation;
    struct CGSize { 
        float width; 
        float height; 
    } _magnifiedSize;
    struct CGSize { 
        float width; 
        float height; 
    } _shadowOffset;
    struct CGPoint { 
        float x; 
        float y; 
    } _lastLocation;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _itemWindFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _trackingWindFrame;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _magnifiedDragEdgeInsets;
}

@property id delegate;
@property struct CGPoint { float x1; float x2; } gestureWindLocation;
@property(retain) NSIndexPath * itemIndexPath;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } itemWindFrame;
@property(readonly) BOOL canShowFullScreen;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } trackingWindFrame;
@property float magnifiedYOffset;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } magnifiedDragEdgeInsets;
@property int imageFormat;
@property struct CGSize { float x1; float x2; } magnifiedSize;
@property struct CGSize { float x1; float x2; } shadowOffset;
@property float shadowRadius;
@property float shadowOpacity;
@property(retain) PUGridMagnifiedView * magnifiedView;
@property struct CGPoint { float x1; float x2; } lastLocation;


- (id)imageForIndexPath:(id)arg1;
- (BOOL)isValidMagnifyLocation:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })trackingWindFrame;
- (struct CGSize { float x1; float x2; })magnifiedSize;
- (id)imageForMagnifyLocation:(struct CGPoint { float x1; float x2; })arg1;
- (id)installMagnifiedView;
- (void)setMagnifiedView:(id)arg1;
- (BOOL)gestureInNewLocation;
- (id)magnifiedView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })itemWindFrame;
- (struct CGPoint { float x1; float x2; })gestureWindLocation;
- (void)setupMagnifiedView;
- (void)setTrackingWindFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMagnifiedSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setMagnifiedYOffset:(float)arg1;
- (float)magnifiedYOffset;
- (void)setImageFormat:(int)arg1;
- (void)setMagnifiedDragEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })magnifiedDragEdgeInsets;
- (void)hideMagnifiedThumbnailWithAnimation:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })magnifiedImageWindFrame;
- (void)prepareForRelease;
- (id)itemIndexPath;
- (BOOL)canShowFullScreen;
- (void)endMagnification;
- (void)continueMagnification;
- (void)beginMagnification;
- (void)setItemIndexPath:(id)arg1;
- (void)setGestureWindLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setItemWindFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)imageFormat;
- (struct CGPoint { float x1; float x2; })lastLocation;
- (void)setLastLocation:(struct CGPoint { float x1; float x2; })arg1;
- (id)initWithDelegate:(id)arg1;
- (void)setShadowOpacity:(float)arg1;
- (void)setShadowRadius:(float)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (float)shadowRadius;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (float)shadowOpacity;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
- (id)delegate;
- (void)loadView;

@end