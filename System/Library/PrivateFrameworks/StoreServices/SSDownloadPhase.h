//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>
#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSString, SSOperationProgress;

@interface SSDownloadPhase : NSObject <SSXPCCoding, NSCopying>
{
    SSOperationProgress *_operationProgress;	// 8 = 0x8
}

- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0000000000020f00
- (id)copyXPCEncoding;	// IMP=0x0000000000020ecd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000020e6f
@property(readonly) SSOperationProgress *operationProgress;
@property(readonly) long long totalProgressValue;
@property(readonly) long long progressValue;
@property(readonly) float progressChangeRate;
@property(readonly) long long progressUnits;
@property(readonly) long long phaseType;
@property(readonly) double estimatedSecondsRemaining;
- (void)dealloc;	// IMP=0x0000000000020d75
- (id)initWithOperationProgress:(id)arg1;	// IMP=0x0000000000020d1e
- (id)init;	// IMP=0x0000000000020d0a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
