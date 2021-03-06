//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPersonNameComponentsFormatter;
@protocol OS_dispatch_queue;

@interface SINameFormatter : NSObject
{
    NSPersonNameComponentsFormatter *_formatter;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000001033a
- (id)personNameComponentsFromString:(id)arg1;	// IMP=0x00100000000101d3
- (id)nameFromPersonNameComponents:(id)arg1;	// IMP=0x0010000000010047
- (id)init;	// IMP=0x001000000000ff70

@end

