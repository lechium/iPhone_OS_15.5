//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSgPTPUnicastUDPv4EtEPort
{
}

+ (id)diagnosticInfoForService:(id)arg1;	// IMP=0x00000000000236b3
+ (id)diagnosticDescriptionForService:(id)arg1 withIndent:(id)arg2;	// IMP=0x00000000000234e3
+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1 andIPv4Address:(unsigned int)arg2;	// IMP=0x0000000000022f8a
- (int)portType;	// IMP=0x00000000000234d8
- (id)_destinationAddressString;	// IMP=0x00000000000233d3
- (id)_sourceAddressString;	// IMP=0x00000000000232ce
- (id)initWithInterfaceName:(id)arg1 andIPv4Address:(unsigned int)arg2;	// IMP=0x000000000002323d
- (id)initWithMatchingDictionary:(id)arg1;	// IMP=0x00000000000231b1
- (id)initWithService:(id)arg1;	// IMP=0x0000000000023182

@end
