//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSgPTPUnicastUDPv6PtPPort
{
}

+ (id)diagnosticInfoForService:(id)arg1;	// IMP=0x00000000000212f9
+ (id)diagnosticDescriptionForService:(id)arg1 withIndent:(id)arg2;	// IMP=0x0000000000021018
+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1 andIPv6Address:(char *)arg2;	// IMP=0x00000000000209ba
- (int)portType;	// IMP=0x000000000002100d
- (id)_destinationAddressString;	// IMP=0x0000000000020e89
- (id)_sourceAddressString;	// IMP=0x0000000000020d05
- (id)initWithInterfaceName:(id)arg1 andIPv6Address:(char *)arg2;	// IMP=0x0000000000020c74
- (id)initWithMatchingDictionary:(id)arg1;	// IMP=0x0000000000020be8
- (id)initWithService:(id)arg1;	// IMP=0x0000000000020bb9

@end
