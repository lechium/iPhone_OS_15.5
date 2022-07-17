//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, NSMutableDictionary;

@interface NSExtensionItem : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_userInfo;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007311d
- (id)_matchingDictionaryRepresentation;	// IMP=0x0000000000073a56
- (id)description;	// IMP=0x00000000000739d7
@property(copy, nonatomic) NSDictionary *userInfo;
@property(copy, nonatomic) NSArray *attachments; // @dynamic attachments;
@property(copy, nonatomic) NSAttributedString *attributedContentText; // @dynamic attributedContentText;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @dynamic attributedTitle;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000732bb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000073298
- (void)dealloc;	// IMP=0x000000000007323a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000073194
- (id)init;	// IMP=0x0000000000073125

@end
