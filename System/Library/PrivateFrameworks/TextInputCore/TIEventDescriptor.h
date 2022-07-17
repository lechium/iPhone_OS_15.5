//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TIEventDescriptor : NSObject
{
    _Bool _includeTestingParameters;	// 8 = 0x8
    NSString *_eventName;	// 16 = 0x10
    NSString *_eventDescription;	// 24 = 0x18
    NSArray *_fieldDescriptors;	// 32 = 0x20
}

+ (id)eventDescriptorWithEventName:(id)arg1 eventDescription:(id)arg2 fieldDescriptors:(id)arg3 includeTestingParameters:(_Bool)arg4;	// IMP=0x00000000000e164a
- (void).cxx_destruct;	// IMP=0x00000000000e1617
@property(readonly, nonatomic) _Bool includeTestingParameters; // @synthesize includeTestingParameters=_includeTestingParameters;
@property(readonly, nonatomic) NSArray *fieldDescriptors; // @synthesize fieldDescriptors=_fieldDescriptors;
@property(readonly, nonatomic) NSString *eventDescription; // @synthesize eventDescription=_eventDescription;
@property(readonly, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (id)initWithEventName:(id)arg1 eventDescription:(id)arg2 fieldDescriptors:(id)arg3 includeTestingParameters:(_Bool)arg4;	// IMP=0x00000000000e152e

@end
