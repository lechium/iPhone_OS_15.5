//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CNContact, NSArray, NSString, UIView;
@protocol CKPinnedConversationContactItemView;

@protocol CKPinnedConversationContactItem <NSObject>
@property(nonatomic) long long contactItemAlignment;
@property(nonatomic) double contentScale;
@property(readonly, nonatomic) NSString *contactItemIdentifier;
- (UIView<CKPinnedConversationContactItemView> *)contactItemView;
- (CNContact *)cnContactWithKeys:(NSArray *)arg1;
@end

