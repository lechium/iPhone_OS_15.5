//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCInterestToken, NSString, NTPBChannelMembershipRecord;

@interface FCChannelMembership : NSObject
{
    NTPBChannelMembershipRecord *_record;	// 8 = 0x8
    FCInterestToken *_interestToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000e31df
@property(retain, nonatomic) FCInterestToken *interestToken; // @synthesize interestToken=_interestToken;
@property(retain, nonatomic) NTPBChannelMembershipRecord *record; // @synthesize record=_record;
- (unsigned long long)hash;	// IMP=0x00000000000e3165
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e2f80
@property(readonly, nonatomic) NSString *draftIssueListID;
@property(readonly, nonatomic) NSString *draftArticleListID;
@property(readonly, nonatomic) _Bool isAllowedToSeeDrafts;
@property(readonly, nonatomic) NSString *channelID;
- (id)initWithRecord:(id)arg1 interestToken:(id)arg2;	// IMP=0x00000000000e2db3

@end

