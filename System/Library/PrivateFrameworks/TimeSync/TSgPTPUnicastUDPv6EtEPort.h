//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSgPTPUnicastUDPv6EtEPort
{
}

+ (id)diagnosticInfoForService:(id)arg1;	// IMP=0x00000000000241f2
+ (id)diagnosticDescriptionForService:(id)arg1 withIndent:(id)arg2;	// IMP=0x0000000000023f11
+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1 andIPv6Address:(char *)arg2;	// IMP=0x00000000000238b3
- (int)portType;	// IMP=0x0000000000023f06
- (id)_destinationAddressString;	// IMP=0x0000000000023d82
- (id)_sourceAddressString;	// IMP=0x0000000000023bfe
- (id)initWithInterfaceName:(id)arg1 andIPv6Address:(char *)arg2;	// IMP=0x0000000000023b6d
- (id)initWithMatchingDictionary:(id)arg1;	// IMP=0x0000000000023ae1
- (id)initWithService:(id)arg1;	// IMP=0x0000000000023ab2

@end

