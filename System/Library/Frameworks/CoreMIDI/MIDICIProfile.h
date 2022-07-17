//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMIDI/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface MIDICIProfile : NSObject <NSSecureCoding>
{
    NSString *name;	// 8 = 0x8
    NSData *profileID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000069b6
+ (id)description;	// IMP=0x00000000000069a9
- (void).cxx_destruct;	// IMP=0x0000000000006981
@property(readonly, nonatomic) NSData *profileID; // @synthesize profileID;
@property(readonly, nonatomic) NSString *name; // @synthesize name;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000068f8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000067f3
- (void)dealloc;	// IMP=0x00000000000067c4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006759
- (const void *)bytes;	// IMP=0x0000000000006743
- (id)description;	// IMP=0x000000000000668b
- (id)initWithData:(id)arg1 name:(id)arg2;	// IMP=0x00000000000065d4
- (id)initWithData:(id)arg1;	// IMP=0x0000000000006252
- (id)init;	// IMP=0x00000000000061c0

@end
