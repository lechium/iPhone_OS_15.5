//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUI/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface CNContactRecentsReference : NSObject <NSSecureCoding>
{
    NSNumber *_recentContactID;	// 8 = 0x8
    NSString *_domain;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000134e90
- (void).cxx_destruct;	// IMP=0x0000000000134e68
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) NSNumber *recentContactID; // @synthesize recentContactID=_recentContactID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000134de6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000134cc2
- (id)initWithRecentContactID:(id)arg1 domain:(id)arg2;	// IMP=0x0000000000134c1a
- (id)init;	// IMP=0x0000000000134bdd

@end
