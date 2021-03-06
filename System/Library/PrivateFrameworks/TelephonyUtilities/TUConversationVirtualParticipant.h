//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSString;

@interface TUConversationVirtualParticipant : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _identifier;	// 8 = 0x8
    NSString *_pluginName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000035b49
- (void).cxx_destruct;	// IMP=0x0000000000035d1d
@property(readonly, nonatomic) NSString *pluginName; // @synthesize pluginName=_pluginName;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000035c34
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000035b51
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000035ac6
- (unsigned long long)hash;	// IMP=0x0000000000035a64
- (_Bool)isEqualToConversationVirtualParticipant:(id)arg1;	// IMP=0x00000000000359ad
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000035950
- (id)description;	// IMP=0x000000000003586b
- (id)initWithIdentifier:(unsigned long long)arg1 pluginName:(id)arg2;	// IMP=0x00000000000357f5

@end

