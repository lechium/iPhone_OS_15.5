//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SSVPlayActivityFeedSerialization : NSObject
{
    NSString *_currentStoreFrontID;	// 8 = 0x8
}

+ (id)defaultOverrideHTTPHeaderFields;	// IMP=0x00000000000afffc
- (void).cxx_destruct;	// IMP=0x00000000000b17f5
@property(copy, nonatomic) NSString *currentStoreFrontID; // @synthesize currentStoreFrontID=_currentStoreFrontID;
- (id)propertyListObjectWithPlayActivityEvent:(id)arg1;	// IMP=0x00000000000b007f

@end
