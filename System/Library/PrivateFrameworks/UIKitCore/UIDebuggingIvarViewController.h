//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIDebuggingInformationViewController-Protocol.h>

@class NSObject;

__attribute__((visibility("hidden")))
@interface UIDebuggingIvarViewController <UIDebuggingInformationViewController>
{
    NSObject *_inspectedObject;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000010f9b3a
@property(nonatomic) __weak NSObject *inspectedObject; // @synthesize inspectedObject=_inspectedObject;
- (void)prepareForDisplayAsTopLevelDebuggingViewController;	// IMP=0x00000000010f9a22
- (id)_ivarsForInspectedObjectInClass:(Class)arg1;	// IMP=0x00000000010f985e
- (id)_classHierarchyForInspectedObject;	// IMP=0x00000000010f9792
- (Class)_classForTableSection:(long long)arg1;	// IMP=0x00000000010f9719
- (id)_ivarForIndexPath:(id)arg1;	// IMP=0x00000000010f9666
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000010f952f
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000010f94d0
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000010f948c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000010f9432
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000010f9347
- (id)init;	// IMP=0x00000000010f9276

@end
