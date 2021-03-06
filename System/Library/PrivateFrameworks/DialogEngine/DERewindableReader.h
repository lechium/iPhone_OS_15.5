//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DialogEngine/DEReader-Protocol.h>

@class NSMutableData;
@protocol DEReader;

@interface DERewindableReader : NSObject <DEReader>
{
    _Bool _rewound;	// 8 = 0x8
    NSObject<DEReader> *_reader;	// 16 = 0x10
    NSMutableData *_rewindData;	// 24 = 0x18
    unsigned long long _rewindOffset;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000012a76e
@property(nonatomic) unsigned long long rewindOffset; // @synthesize rewindOffset=_rewindOffset;
@property(retain, nonatomic) NSMutableData *rewindData; // @synthesize rewindData=_rewindData;
@property(nonatomic) _Bool rewound; // @synthesize rewound=_rewound;
@property(retain, nonatomic) NSObject<DEReader> *reader; // @synthesize reader=_reader;
- (id)readData;	// IMP=0x000000000012a5eb
- (id)readDataOfLength:(unsigned long long)arg1;	// IMP=0x000000000012a449
- (void)close;	// IMP=0x000000000012a40b
- (_Bool)rewind;	// IMP=0x000000000012a3e6
- (_Bool)isRewindable;	// IMP=0x000000000012a3ce
- (void)disableRewind;	// IMP=0x000000000012a3b4
- (void)dealloc;	// IMP=0x000000000012a326
- (id)init;	// IMP=0x000000000012a311
- (id)initWithReader:(id)arg1;	// IMP=0x000000000012a245

@end

