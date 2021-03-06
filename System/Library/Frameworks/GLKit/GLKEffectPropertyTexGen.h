//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GLKEffectPropertyTexGen
{
    int _mode;	// 32 = 0x20
    float *_plane;	// 40 = 0x28
    int _coord;	// 48 = 0x30
    int _modeLoc;	// 52 = 0x34
    int _planeLoc;	// 56 = 0x38
    int _eyePlaneByInvModelviewLoc;	// 60 = 0x3c
    unsigned int _textureIndex;	// 64 = 0x40
    float *_eyePlaneByInvModelview;	// 72 = 0x48
    char *_modeNameString;	// 80 = 0x50
    char *_planeNameString;	// 88 = 0x58
}

@property(nonatomic) unsigned int textureIndex; // @synthesize textureIndex=_textureIndex;
@property(nonatomic) char *planeNameString; // @synthesize planeNameString=_planeNameString;
@property(nonatomic) char *modeNameString; // @synthesize modeNameString=_modeNameString;
@property(nonatomic) int eyePlaneByInvModelviewLoc; // @synthesize eyePlaneByInvModelviewLoc=_eyePlaneByInvModelviewLoc;
@property(nonatomic) int planeLoc; // @synthesize planeLoc=_planeLoc;
@property(nonatomic) int modeLoc; // @synthesize modeLoc=_modeLoc;
@property(nonatomic) float *eyePlaneByInvModelview; // @synthesize eyePlaneByInvModelview=_eyePlaneByInvModelview;
@property(readonly, nonatomic) int coord; // @synthesize coord=_coord;
@property(nonatomic) float *plane; // @synthesize plane=_plane;
@property(nonatomic) int mode; // @synthesize mode=_mode;
- (void)dealloc;	// IMP=0x000000000000e7c6
- (void)bind;	// IMP=0x000000000000e730
- (void)initializeMasks;	// IMP=0x000000000000e6cf
- (void)setShaderBindings;	// IMP=0x000000000000e5a5
- (void)dirtyAllUniforms;	// IMP=0x000000000000e3d0
- (id)initWithMode:(int)arg1 coord:(int)arg2;	// IMP=0x000000000000e2d0
- (id)init;	// IMP=0x000000000000e2b8

@end

