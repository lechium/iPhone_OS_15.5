//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@protocol WFFileStorageServiceOperation;

@interface WFMoveFileAction : WFAction
{
    id <WFFileStorageServiceOperation> _saveOperation;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000224304
@property(retain, nonatomic) id <WFFileStorageServiceOperation> saveOperation; // @synthesize saveOperation=_saveOperation;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;	// IMP=0x00000000002241f8
- (id)contentDestinationWithError:(id *)arg1;	// IMP=0x0000000000224185
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x0000000000223f00

@end

