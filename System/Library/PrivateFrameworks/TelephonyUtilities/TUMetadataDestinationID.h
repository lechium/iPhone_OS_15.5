//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSString, TUHandle;

@interface TUMetadataDestinationID : NSObject <NSSecureCoding, NSCopying>
{
    TUHandle *_handle;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000080aac
+ (id)metadataDestinationIDForCall:(id)arg1;	// IMP=0x0000000000080558
+ (id)metadataDestinationIDsForCHRecentCalls:(id)arg1;	// IMP=0x0000000000015ba0
+ (id)metadataDestinationIDsForCHRecentCall:(id)arg1;	// IMP=0x0000000000015ae4
- (void).cxx_destruct;	// IMP=0x0000000000080e50
@property(readonly, nonatomic) TUHandle *handle; // @synthesize handle=_handle;
- (_Bool)isEqualToMetadataDestinationID:(id)arg1;	// IMP=0x0000000000080dc7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000080d60
- (unsigned long long)hash;	// IMP=0x0000000000080cf2
- (id)description;	// IMP=0x0000000000080c3e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000080bd5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000080b1c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000080ab4
@property(readonly, copy, nonatomic) NSString *isoCountryCode;
- (id)initWithHandle:(id)arg1;	// IMP=0x0000000000080831
- (id)initWithDestinationID:(id)arg1 isoCountryCode:(id)arg2;	// IMP=0x00000000000806f8

@end
