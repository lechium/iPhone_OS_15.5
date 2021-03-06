//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, NSSet, NSString;
@protocol CNUIUserActivityRestorerDelegate;

@interface CNUIUserActivityRestorer : NSObject
{
    id <CNUIUserActivityRestorerDelegate> _delegate;	// 8 = 0x8
    NSSet *_restorableActivityTypes;	// 16 = 0x10
    CNContactStore *_contactStore;	// 24 = 0x18
    NSString *_activityTypeCreateContactIntent;	// 32 = 0x20
    NSString *_activityTypeSpotlightQueryContinuation;	// 40 = 0x28
    NSString *_activityTypeSpotlightSearchableItem;	// 48 = 0x30
}

+ (id)log;	// IMP=0x0000000000019ade
- (void).cxx_destruct;	// IMP=0x000000000001b0c4
@property(readonly, nonatomic) NSString *activityTypeSpotlightSearchableItem; // @synthesize activityTypeSpotlightSearchableItem=_activityTypeSpotlightSearchableItem;
@property(readonly, nonatomic) NSString *activityTypeSpotlightQueryContinuation; // @synthesize activityTypeSpotlightQueryContinuation=_activityTypeSpotlightQueryContinuation;
@property(readonly, nonatomic) NSString *activityTypeCreateContactIntent; // @synthesize activityTypeCreateContactIntent=_activityTypeCreateContactIntent;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(readonly, nonatomic) NSSet *restorableActivityTypes; // @synthesize restorableActivityTypes=_restorableActivityTypes;
@property(nonatomic) __weak id <CNUIUserActivityRestorerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)restoreCreateContactIntent:(id)arg1;	// IMP=0x000000000001aef0
- (_Bool)restoreSpotlightSearchableItem:(id)arg1;	// IMP=0x000000000001abf5
- (_Bool)restoreSpotlightQueryContinuation:(id)arg1;	// IMP=0x000000000001aa73
- (_Bool)restoreViewingList:(id)arg1;	// IMP=0x000000000001a63d
- (_Bool)restoreEditingContact:(id)arg1;	// IMP=0x000000000001a3b3
- (_Bool)restoreViewingContact:(id)arg1;	// IMP=0x000000000001a129
- (_Bool)restoreUserActivity:(id)arg1;	// IMP=0x0000000000019e0c
- (_Bool)shouldEnableActivityIndicatorWhenRestoringUserActivityWithType:(id)arg1;	// IMP=0x0000000000019d4e
- (id)initWithContactStore:(id)arg1;	// IMP=0x0000000000019b3a

@end

