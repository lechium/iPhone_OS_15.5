//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CRKInterfaceNameToIPAddressMap : NSObject
{
    NSDictionary *mIPAddressesByInterfaceName;	// 8 = 0x8
}

+ (id)makeIPAddressesByInterfaceName;	// IMP=0x0000000000071090
+ (id)makeEnumerator;	// IMP=0x0000000000070fe2
- (void).cxx_destruct;	// IMP=0x00000000000712a3
- (id)IPAddressForInterfaceName:(id)arg1;	// IMP=0x0000000000070fcc
- (id)init;	// IMP=0x0000000000070f62

@end
