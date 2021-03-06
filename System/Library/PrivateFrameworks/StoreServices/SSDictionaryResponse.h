//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSURL;

@interface SSDictionaryResponse : NSObject <NSCopying>
{
    NSDictionary *_dictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000c4a3e
@property(readonly, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_dictionary;
- (id)_valueForProtocolKey:(id)arg1;	// IMP=0x00000000000c498e
- (id)_copyAccount;	// IMP=0x00000000000c4814
@property(readonly, nonatomic) NSURL *versionMismatchURL;
@property(readonly, nonatomic) NSArray *pingURLs;
@property(readonly, nonatomic, getter=isSupportedProtocolVersion) _Bool supportedProtocolVersion;
@property(readonly, nonatomic) NSNumber *failureType;
- (id)actionsWithActionType:(id)arg1;	// IMP=0x00000000000c413c
@property(readonly, nonatomic) NSArray *actions;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c3545
- (id)initWithResponseDictionary:(id)arg1;	// IMP=0x00000000000c3495
- (id)init;	// IMP=0x00000000000c3481

@end

