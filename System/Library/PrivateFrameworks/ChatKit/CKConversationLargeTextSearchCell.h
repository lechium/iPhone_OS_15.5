//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/CKConversationSearchCellProtocol-Protocol.h>

@class NSString;
@protocol CKConversationSearchCellDelegate;

@interface CKConversationLargeTextSearchCell <CKConversationSearchCellProtocol>
{
    struct UIEdgeInsets marginInsets;	// 112 = 0x70
}

+ (id)annotatedResultStringWithSearchText:(id)arg1 resultText:(id)arg2 primaryTextColor:(id)arg3 primaryFont:(id)arg4 annotatedTextColor:(id)arg5 annotatedFont:(id)arg6;	// IMP=0x000000000014633b
@property(nonatomic) struct UIEdgeInsets marginInsets; // @synthesize marginInsets;
- (void)configureWithQueryResult:(id)arg1 searchText:(id)arg2;	// IMP=0x0000000000145f8a
- (void)updateUnreadIndicatorWithImage:(id)arg1 tintColor:(id)arg2;	// IMP=0x0000000000145f84
- (void)layoutSubviews;	// IMP=0x0000000000145f41
- (id)avatarView;	// IMP=0x0000000000145f39

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CKConversationSearchCellDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

