//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HMFoundation/HMFObject-Protocol.h>

@class NSArray, NSString;

@interface HMFObject : NSObject <HMFObject>
{
}

+ (id)shortDescription;	// IMP=0x0000000000048587
- (id)redactedDescription;	// IMP=0x00000000000485d8
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *shortDescription;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

