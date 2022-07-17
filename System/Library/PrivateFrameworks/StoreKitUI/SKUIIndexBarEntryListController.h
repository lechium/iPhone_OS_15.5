//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SKUIViewElement;
@protocol SKUIIndexBarEntryListControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIIndexBarEntryListController : NSObject
{
    _Bool _needsRootTargetViewElement;	// 8 = 0x8
    _Bool _hidesIndexBar;	// 9 = 0x9
    id <SKUIIndexBarEntryListControllerDelegate> _delegate;	// 16 = 0x10
    NSString *_rootTargetIndexBarEntryID;	// 24 = 0x18
    SKUIViewElement *_rootTargetViewElement;	// 32 = 0x20
    long long _numberOfEntryDescriptors;	// 40 = 0x28
}

+ (id)entryListControllerForEntryListViewElement:(id)arg1;	// IMP=0x000000000031412f
+ (id)entryListControllerForEntryViewElement:(id)arg1;	// IMP=0x00000000003140e2
- (void).cxx_destruct;	// IMP=0x000000000031428a
@property(readonly, nonatomic) long long numberOfEntryDescriptors; // @synthesize numberOfEntryDescriptors=_numberOfEntryDescriptors;
@property(retain, nonatomic) SKUIViewElement *rootTargetViewElement; // @synthesize rootTargetViewElement=_rootTargetViewElement;
@property(readonly, nonatomic) NSString *rootTargetIndexBarEntryID; // @synthesize rootTargetIndexBarEntryID=_rootTargetIndexBarEntryID;
@property(readonly, nonatomic) _Bool hidesIndexBar; // @synthesize hidesIndexBar=_hidesIndexBar;
@property(readonly, nonatomic) _Bool needsRootTargetViewElement; // @synthesize needsRootTargetViewElement=_needsRootTargetViewElement;
@property(nonatomic) __weak id <SKUIIndexBarEntryListControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didInvalidate;	// IMP=0x00000000003141c5
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long *)arg2;	// IMP=0x00000000003141bd
- (void)reloadViewElementData;	// IMP=0x00000000003141b7
- (id)entryDescriptorAtIndex:(long long)arg1;	// IMP=0x00000000003141af

@end
