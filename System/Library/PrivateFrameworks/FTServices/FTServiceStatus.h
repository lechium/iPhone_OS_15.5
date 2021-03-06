//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FTServiceStatus : NSObject
{
    unsigned long long _supportedServicesFlags;	// 8 = 0x8
    int _supportedServicesToken;	// 16 = 0x10
    _Bool _blockPost;	// 20 = 0x14
}

+ (id)sharedInstance;	// IMP=0x000000000000f02f
@property(nonatomic) _Bool blockPost; // @synthesize blockPost=_blockPost;
@property unsigned long long supportedServicesFlags; // @synthesize supportedServicesFlags=_supportedServicesFlags;
@property(nonatomic) int supportedServicesToken; // @synthesize supportedServicesToken=_supportedServicesToken;
- (unsigned long long)_noCache_supportedServicesFlags;	// IMP=0x000000000000f4ad
- (void)_removeObservers;	// IMP=0x000000000000f494
- (void)_addObservers;	// IMP=0x000000000000f341
- (void)_reload;	// IMP=0x000000000000f181
@property(readonly, nonatomic) _Bool faceTimeMultiwaySupported;
@property(readonly, nonatomic) _Bool faceTimeAudioSupported;
@property(readonly, nonatomic) _Bool iMessageSupported;
- (void)dealloc;	// IMP=0x000000000000f0fd
- (id)initPrivate;	// IMP=0x000000000000f094

@end

