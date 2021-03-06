//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Portrait/PTByteWriter-Protocol.h>

@class NSError, NSMutableData, NSString;

@interface PTDataByteWriter : NSObject <PTByteWriter>
{
    NSMutableData *_data;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001ceff
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSMutableData *data; // @synthesize data=_data;
- (id)_errorForSize:(unsigned long long)arg1 offset:(unsigned long long)arg2;	// IMP=0x000000000001cd97
- (_Bool)writeBytes:(const void *)arg1 size:(unsigned long long)arg2 offset:(unsigned long long)arg3;	// IMP=0x000000000001cc85
- (_Bool)appendBytes:(const void *)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000001cb8e
- (id)initWithMutableData:(id)arg1;	// IMP=0x000000000001cb23

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

