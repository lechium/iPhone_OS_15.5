//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveInputPredictionsInternals/PSGInternalServerProtocol-Protocol.h>

@class NSString, PSGExperimentResolver, _PASBundleIdResolver;
@protocol PSGInternalServerProtocol;

@interface PSGInternalRequestHandler : NSObject <PSGInternalServerProtocol>
{
    id <PSGInternalServerProtocol> _clientProxy;	// 8 = 0x8
    PSGExperimentResolver *_experimentResolver;	// 16 = 0x10
    NSString *_clientProcessName;	// 24 = 0x18
    _PASBundleIdResolver *_bundleIdResolver;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000661e
@property(retain, nonatomic) _PASBundleIdResolver *bundleIdResolver; // @synthesize bundleIdResolver=_bundleIdResolver;
@property(copy, nonatomic) NSString *clientProcessName; // @synthesize clientProcessName=_clientProcessName;
- (void)sysdiagnoseInformationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000622a
- (id)_getPreferredLanguages;	// IMP=0x0000000000006211
- (id)_getWordBoundaryExperimentInfo:(id)arg1;	// IMP=0x0000000000005f81
- (id)_getZKWExperimentInfo:(id)arg1;	// IMP=0x0000000000005cf1
- (void)setRemoteObjectProxy:(id)arg1;	// IMP=0x0000000000005ce0
- (id)_initWithExperimentResolver:(id)arg1;	// IMP=0x0000000000005c75
- (id)init;	// IMP=0x0000000000005c1b

@end

