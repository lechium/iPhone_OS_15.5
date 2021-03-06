//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol BKHIDEventProcessorRegistering, BKHIDSystemInterfacing, BKIOHIDServiceMatcherDataProviding;

@interface BKHIDEventProcessorCreationContext : NSObject
{
    id <BKHIDSystemInterfacing> _systemInterface;	// 8 = 0x8
    id <BKIOHIDServiceMatcherDataProviding> _serviceMatcherDataProvider;	// 16 = 0x10
    id <BKHIDEventProcessorRegistering> _eventProcessorRegistry;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000014637
@property(retain, nonatomic) id <BKHIDEventProcessorRegistering> eventProcessorRegistry; // @synthesize eventProcessorRegistry=_eventProcessorRegistry;
@property(retain, nonatomic) id <BKIOHIDServiceMatcherDataProviding> serviceMatcherDataProvider; // @synthesize serviceMatcherDataProvider=_serviceMatcherDataProvider;
@property(retain, nonatomic) id <BKHIDSystemInterfacing> systemInterface; // @synthesize systemInterface=_systemInterface;

@end

