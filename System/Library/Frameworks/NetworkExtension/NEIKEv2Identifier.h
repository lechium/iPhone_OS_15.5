//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NEIKEv2Identifier : NSObject <NSCopying>
{
    NSData *_identifierData;	// 8 = 0x8
}

+ (id)createIdentifierWithType:(unsigned long long)arg1 data:(id)arg2;	// IMP=0x0000000000096188
+ (id)createIdentifierWithType:(unsigned long long)arg1 data:(id)arg2 zone:(struct _NSZone *)arg3;	// IMP=0x0000000000095e5e
+ (id)copyTypeDescription;	// IMP=0x0000000000095d58
- (void).cxx_destruct;	// IMP=0x0000000000096422
@property(retain) NSData *identifierData; // @synthesize identifierData=_identifierData;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000096308
- (unsigned long long)hash;	// IMP=0x00000000000962a6
@property(readonly) NSString *stringValue;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009619d
- (id)description;	// IMP=0x0000000000095e45
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000095d6d
@property(readonly) unsigned long long identifierType;

@end
