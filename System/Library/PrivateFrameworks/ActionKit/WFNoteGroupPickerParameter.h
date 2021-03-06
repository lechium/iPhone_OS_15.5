//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFDynamicEnumerationParameter.h>

#import <ActionKit/WFDynamicEnumerationDataSource-Protocol.h>

@class NSString;

@interface WFNoteGroupPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource>
{
    NSString *_appBundleIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000393bce
@property(copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
- (void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000393af9
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;	// IMP=0x0000000000393a7c
- (id)initWithDefinition:(id)arg1;	// IMP=0x00000000003939d5
- (Class)singleStateClass;	// IMP=0x00000000003939c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

