//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKDictionaryCodable-Protocol.h>

@class NSDictionary, NSError;

@interface CRKErrorBox : NSObject <CRKDictionaryCodable>
{
    NSError *_error;	// 8 = 0x8
}

+ (id)instanceWithDictionary:(id)arg1;	// IMP=0x000000000006b61c
- (void).cxx_destruct;	// IMP=0x000000000006b7fe
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
- (id)initWithError:(id)arg1;	// IMP=0x000000000006b425

@end

