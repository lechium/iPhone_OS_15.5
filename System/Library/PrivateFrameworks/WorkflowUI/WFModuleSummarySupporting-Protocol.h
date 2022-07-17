//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class NSArray, WFSlotTemplateSlot;
@protocol WFParameterState;

@protocol WFModuleSummarySupporting <NSObject>

@optional
+ (_Bool)supportsEditingMultipleValues;
+ (Class)moduleSummaryEditorClass;
- (_Bool)moduleSummaryShowsAddButtonForState:(id <WFParameterState>)arg1;
- (id <WFParameterState>)defaultStateForNewArrayElement;
- (NSArray *)moduleSummarySlotsForState:(id <WFParameterState>)arg1;
- (WFSlotTemplateSlot *)moduleSummarySlotForState:(id <WFParameterState>)arg1;
@end
