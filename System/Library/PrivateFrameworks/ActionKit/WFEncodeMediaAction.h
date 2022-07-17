//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@class NSMutableArray;

@interface WFEncodeMediaAction : WFAction
{
    NSMutableArray *_exportSessions;	// 8 = 0x8
}

+ (_Bool)outputIsExemptFromTaintTrackingInheritance;	// IMP=0x000000000038da02
- (void).cxx_destruct;	// IMP=0x000000000038b964
@property(retain, nonatomic) NSMutableArray *exportSessions; // @synthesize exportSessions=_exportSessions;
- (void)updateSpeedVisibility;	// IMP=0x000000000038b80a
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000038b75c
- (void)initializeParameters;	// IMP=0x000000000038b71b
- (void)finishRunningWithError:(id)arg1;	// IMP=0x000000000038b6b5
- (void)cancel;	// IMP=0x000000000038b643
- (void)encodeItems:(id)arg1 metadata:(id)arg2;	// IMP=0x000000000038a63b
- (id)metadataForAsset:(id)arg1 newMetadata:(id)arg2;	// IMP=0x000000000038a20e
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x000000000038a18b
- (void)getMetadataItems:(CDUnknownBlockType)arg1;	// IMP=0x0000000000389930
- (id)nonEmptyStringValueForKey:(id)arg1;	// IMP=0x000000000038989b

@end
