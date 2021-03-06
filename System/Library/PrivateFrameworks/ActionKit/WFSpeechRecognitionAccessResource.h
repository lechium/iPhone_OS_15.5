//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAccessResource.h>

@interface WFSpeechRecognitionAccessResource : WFAccessResource
{
}

+ (_Bool)isSystemResource;	// IMP=0x0000000000201bea
- (void)attemptRecoveryFromErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000201dbd
- (id)errorRecoveryOptionsForStatus:(unsigned long long)arg1;	// IMP=0x0000000000201d34
- (id)localizedErrorReasonForStatus:(unsigned long long)arg1;	// IMP=0x0000000000201d23
- (unsigned long long)status;	// IMP=0x0000000000201c30
- (id)protectedResourceDescription;	// IMP=0x0000000000201c23
- (id)icon;	// IMP=0x0000000000201c03
- (id)name;	// IMP=0x0000000000201bf2

@end

