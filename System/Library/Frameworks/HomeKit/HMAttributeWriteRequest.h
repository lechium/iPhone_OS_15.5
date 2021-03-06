//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMWriteOperation-Protocol.h>

@class NSString;
@protocol NSCopying><NSObject;

@interface HMAttributeWriteRequest <HMWriteOperation>
{
    id <NSCopying><NSObject> _value;	// 24 = 0x18
}

+ (id)writeRequestWithAccessoryProfile:(id)arg1 attribute:(id)arg2 value:(id)arg3;	// IMP=0x000000000006c6c7
- (void).cxx_destruct;	// IMP=0x000000000006c6b4
@property(readonly, nonatomic) id <NSCopying><NSObject> value; // @synthesize value=_value;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006c46f
- (id)initWithAccessoryProfile:(id)arg1 attribute:(id)arg2 value:(id)arg3;	// IMP=0x000000000006c3ed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

