//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@interface WFMakeGIFAction : WFAction
{
    CDUnknownBlockType _cancelBlock;	// 8 = 0x8
}

+ (_Bool)outputIsExemptFromTaintTrackingInheritance;	// IMP=0x000000000036b758
- (void).cxx_destruct;	// IMP=0x000000000036ae1c
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (void)cancel;	// IMP=0x000000000036ad5b
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x000000000036aa46

@end

