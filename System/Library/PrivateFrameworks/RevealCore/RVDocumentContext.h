//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RevealCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSString, NSTimeZone, NSURL;

@interface RVDocumentContext : NSObject <NSSecureCoding>
{
    NSString *authorName;	// 8 = 0x8
    NSString *authorEmailAddress;	// 16 = 0x10
    NSString *authorContactUUID;	// 24 = 0x18
    NSDate *contentReferenceDate;	// 32 = 0x20
    NSTimeZone *contentReferenceTimeZone;	// 40 = 0x28
    NSString *contentSubject;	// 48 = 0x30
    NSString *selectedText;	// 56 = 0x38
    NSURL *documentURL;	// 64 = 0x40
    NSArray *existingDDResultsList;	// 72 = 0x48
    NSString *coreSpotlightUniqueIdentifier;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000266c
- (void).cxx_destruct;	// IMP=0x00000000000025ec
@property(copy, nonatomic) NSString *coreSpotlightUniqueIdentifier; // @synthesize coreSpotlightUniqueIdentifier;
@property(copy, nonatomic) NSArray *existingDDResultsList; // @synthesize existingDDResultsList;
@property(copy, nonatomic) NSURL *documentURL; // @synthesize documentURL;
@property(copy, nonatomic) NSString *selectedText; // @synthesize selectedText;
@property(copy, nonatomic) NSString *contentSubject; // @synthesize contentSubject;
@property(copy, nonatomic) NSTimeZone *contentReferenceTimeZone; // @synthesize contentReferenceTimeZone;
@property(copy, nonatomic) NSDate *contentReferenceDate; // @synthesize contentReferenceDate;
@property(copy, nonatomic) NSString *authorContactUUID; // @synthesize authorContactUUID;
@property(copy, nonatomic) NSString *authorEmailAddress; // @synthesize authorEmailAddress;
@property(copy, nonatomic) NSString *authorName; // @synthesize authorName;
- (void)setNameAndEmailWithRawSenderField:(id)arg1;	// IMP=0x0000000000001d37
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000001ada
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000188a

@end

