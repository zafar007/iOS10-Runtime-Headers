/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface IrisMovieClip : MovieClip {
    PVEffect * _frameBlendEffect;
    bool  _front;
    PVEffect * _kenBurnsEffect;
    KenBurnsInfo * _kenBurnsInfo;
    IrisMovieClip * _shiftedClip;
}

@property (nonatomic, retain) PVEffect *frameBlendEffect;
@property (getter=isFront, nonatomic) bool front;
@property (nonatomic, retain) PVEffect *kenBurnsEffect;
@property (nonatomic, retain) KenBurnsInfo *kenBurnsInfo;
@property (nonatomic, readonly) IrisMovieClip *shiftedClip;

+ (id)irisMovieClipWithURL:(id)arg1 asset:(id)arg2 front:(bool)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)frameBlendEffect;
- (bool)isFront;
- (id)kenBurnsEffect;
- (id)kenBurnsInfo;
- (int)maxDuration;
- (void)setFrameBlendEffect:(id)arg1;
- (void)setFront:(bool)arg1;
- (void)setKenBurnsEffect:(id)arg1;
- (void)setKenBurnsInfo:(id)arg1;
- (id)shiftedClip;
- (void)validateEffectRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 inProject:(id)arg2;

@end