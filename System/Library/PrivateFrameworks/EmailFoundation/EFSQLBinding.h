//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFSQLBindable-Protocol.h>

@class NSString;

@interface EFSQLBinding : NSObject <EFSQLBindable>
{
}

+ (id)nullBinding;	// IMP=0x0000000000034383
+ (id)bindingWithDouble:(double)arg1;	// IMP=0x0000000000034348
+ (id)bindingWithInt64:(long long)arg1;	// IMP=0x0000000000034312
+ (id)bindingWithData:(id)arg1;	// IMP=0x00000000000342b4
+ (id)bindingWithString:(id)arg1;	// IMP=0x0000000000034256
@property(readonly, nonatomic) EFSQLBinding *ef_SQLBinding;
- (void)bindTo:(struct sqlite3_stmt *)arg1 withSQLIndex:(int)arg2;	// IMP=0x00000000000345ec
- (void)bindToStatement:(id)arg1 usingName:(id)arg2;	// IMP=0x00000000000344a6
- (void)bindToStatement:(id)arg1 usingIndex:(unsigned long long)arg2;	// IMP=0x000000000003439c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

