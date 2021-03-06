//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSNumber, NSString, SASmsGroupName;

@interface SASmsSearch
{
}

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000008cd0
+ (id)search;	// IMP=0x0000000000008cbe
- (_Bool)mutatingCommand;	// IMP=0x0000000000008e4c
- (_Bool)requiresResponse;	// IMP=0x0000000000008e44
@property(copy, nonatomic) NSNumber *unread;
@property(copy, nonatomic) NSString *subject;
@property(copy, nonatomic) NSDate *start;
@property(retain, nonatomic) SASmsGroupName *smsGroup;
@property(copy, nonatomic) NSArray *senders;
@property(copy, nonatomic) NSArray *recipients;
@property(copy, nonatomic) NSNumber *outgoing;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSDate *end;
- (id)encodedClassName;	// IMP=0x0000000000008cb1
- (id)groupIdentifier;	// IMP=0x0000000000008c9d

@end

