//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDAppContainerTuple, NSString;

@interface CKDAppContainerAccountTuple : NSObject <NSCopying>
{
    CKDAppContainerTuple *_appContainerTuple;	// 8 = 0x8
    NSString *_accountID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000070a2c
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(retain, nonatomic) CKDAppContainerTuple *appContainerTuple; // @synthesize appContainerTuple=_appContainerTuple;
- (id)description;	// IMP=0x00000000000709e6
- (id)CKPropertiesDescription;	// IMP=0x0000000000070953
- (unsigned long long)hash;	// IMP=0x00000000000708c6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007069a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000705d9
- (id)initWithAppContainerTuple:(id)arg1 accountID:(id)arg2;	// IMP=0x000000000007052e

@end
