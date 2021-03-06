//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MIBundle, NSDictionary, NSURL;

@interface MIInstallable : NSObject
{
    unsigned char _packageFormat;	// 8 = 0x8
    NSDictionary *_userOptions;	// 16 = 0x10
    NSURL *_stagingRootURL;	// 24 = 0x18
    MIBundle *_bundle;	// 32 = 0x20
    CDUnknownBlockType _progressBlock;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000051aa0
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain, nonatomic) MIBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, nonatomic) unsigned char packageFormat; // @synthesize packageFormat=_packageFormat;
@property(readonly, nonatomic) NSURL *stagingRootURL; // @synthesize stagingRootURL=_stagingRootURL;
@property(readonly, nonatomic) NSDictionary *userOptions; // @synthesize userOptions=_userOptions;
- (id)description;	// IMP=0x00100000000518e3
- (id)launchServicesDictionariesWithError:(id *)arg1;	// IMP=0x00100000000518d6
- (_Bool)finalizeInstallationWithError:(id *)arg1;	// IMP=0x00100000000518ce
- (_Bool)postFlightInstallationWithError:(id *)arg1;	// IMP=0x00100000000518c6
- (_Bool)performInstallationWithError:(id *)arg1;	// IMP=0x00100000000518be
- (_Bool)performVerificationWithError:(id *)arg1;	// IMP=0x00100000000518b6
- (_Bool)performPreflightWithError:(id *)arg1;	// IMP=0x00100000000518a4
- (_Bool)applyPatchWithError:(id *)arg1;	// IMP=0x001000000005189c
@property(readonly, nonatomic) _Bool shouldModifyExistingContainers;
- (id)initWithBundle:(id)arg1 inStagingRoot:(id)arg2 packageFormat:(unsigned char)arg3 userOptions:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000517d2

@end

