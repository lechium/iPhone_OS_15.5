//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContentKit/WFErrorRecoveryAttempting-Protocol.h>

@class NSString;

@interface WFBlockRecoveryAttempter : NSObject <WFErrorRecoveryAttempting>
{
    CDUnknownBlockType _handlerBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000948d2
@property(copy, nonatomic) CDUnknownBlockType handlerBlock; // @synthesize handlerBlock=_handlerBlock;
- (_Bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;	// IMP=0x000000000009489e
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 userInterface:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000947ff
- (id)initWithHandlerBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000094775

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

