/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage;

@interface GKLeaderboardCategoryIconBrush : GKImageBrush {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    UIImage *_backgroundImage;
    } _imageRect;
    UIImage *_maskImage;
    UIImage *_overlayImage;
}

@property(retain) UIImage * backgroundImage;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } imageRect;
@property(retain) UIImage * maskImage;
@property(retain) UIImage * overlayImage;

- (id)backgroundImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRect;
- (id)maskImage;
- (id)overlayImage;
- (float)scaleForInput:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setImageRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMaskImage:(id)arg1;
- (void)setOverlayImage:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeForInput:(id)arg1;

@end
