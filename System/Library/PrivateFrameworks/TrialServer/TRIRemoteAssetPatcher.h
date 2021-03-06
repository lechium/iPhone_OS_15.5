//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/TRIAssetPatching-Protocol.h>

@protocol OS_xpc_object;

@interface TRIRemoteAssetPatcher : NSObject <TRIAssetPatching>
{
    NSObject<OS_xpc_object> *_monitoredActivity;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000e4d18
- (CDStruct_6b48f683)applyPatchWithFilename:(id)arg1 toSrcDir:(id)arg2 writingToEmptyDestDir:(id)arg3 postPatchCompression:(CDStruct_69d7cc99)arg4 error:(id *)arg5;	// IMP=0x00000000000e45ab
- (id)_tokenForSandboxExtensionWithClass:(const char *)arg1 path:(id)arg2;	// IMP=0x00000000000e44d8
- (id)initWithMonitoredActivity:(id)arg1;	// IMP=0x00000000000e446d
- (id)init;	// IMP=0x00000000000e4467

@end

