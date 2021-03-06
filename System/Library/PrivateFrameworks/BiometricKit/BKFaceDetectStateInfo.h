//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface BKFaceDetectStateInfo : NSObject
{
    _Bool _faceDetected;	// 8 = 0x8
    _Bool _tooCloseToCamera;	// 9 = 0x9
    _Bool _tooFarFromCamera;	// 10 = 0xa
    _Bool _multipleFaces;	// 11 = 0xb
    _Bool _flare;	// 12 = 0xc
    _Bool _occlusion;	// 13 = 0xd
    _Bool _partiallyOutOfView;	// 14 = 0xe
    _Bool _unsupportedGlasses;	// 15 = 0xf
    _Bool _glassesMismatch;	// 16 = 0x10
    NSNumber *_pitch;	// 24 = 0x18
    NSNumber *_yaw;	// 32 = 0x20
    NSNumber *_roll;	// 40 = 0x28
    unsigned long long _orientation;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000058ea
@property(readonly, nonatomic) _Bool glassesMismatch; // @synthesize glassesMismatch=_glassesMismatch;
@property(readonly, nonatomic) _Bool unsupportedGlasses; // @synthesize unsupportedGlasses=_unsupportedGlasses;
@property(readonly, nonatomic) _Bool partiallyOutOfView; // @synthesize partiallyOutOfView=_partiallyOutOfView;
@property(readonly, nonatomic) _Bool occlusion; // @synthesize occlusion=_occlusion;
@property(readonly, nonatomic) _Bool flare; // @synthesize flare=_flare;
@property(readonly, nonatomic) _Bool multipleFaces; // @synthesize multipleFaces=_multipleFaces;
@property(readonly, nonatomic) _Bool tooFarFromCamera; // @synthesize tooFarFromCamera=_tooFarFromCamera;
@property(readonly, nonatomic) _Bool tooCloseToCamera; // @synthesize tooCloseToCamera=_tooCloseToCamera;
@property(readonly, nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) NSNumber *roll; // @synthesize roll=_roll;
@property(readonly, nonatomic) NSNumber *yaw; // @synthesize yaw=_yaw;
@property(readonly, nonatomic) NSNumber *pitch; // @synthesize pitch=_pitch;
@property(readonly, nonatomic) _Bool faceDetected; // @synthesize faceDetected=_faceDetected;

@end

