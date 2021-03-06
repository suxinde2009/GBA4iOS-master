/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@interface UIView (Geometry2)
- (BOOL)autoresizesSubviews;	// IMP=0x323c48ec
- (struct CGRect)bounds;	// IMP=0x323c4918
- (struct CGPoint)convertPoint:(struct CGPoint)fp8 fromView:(id)fp16;	// IMP=0x323c43d8
- (struct CGPoint)convertPoint:(struct CGPoint)fp8 toView:(id)fp16;	// IMP=0x323c432c
- (struct CGRect)convertRect:(struct CGRect)fp8 fromView:(id)fp24;	// IMP=0x323c4598
- (struct CGRect)convertRect:(struct CGRect)fp8 toView:(id)fp24;	// IMP=0x323c4640
- (struct CGSize)convertSize:(struct CGSize)fp8 fromView:(id)fp16;	// IMP=0x323c4484
- (struct CGRect)extent;	// IMP=0x323c89a0
- (struct CGRect)frame;	// IMP=0x323c4070
- (struct CGRect)hitRect;	// IMP=0x323c46e8
- (id)hitTest:(struct CGPoint)fp8 forEvent:(struct __GSEvent *)fp16;	// IMP=0x323c65a4
- (BOOL)ignoresMouseEvents;	// IMP=0x323c42a4
- (struct CGPoint)origin;	// IMP=0x323c4a28
- (BOOL)pointInside:(struct CGPoint)fp8 forEvent:(struct __GSEvent *)fp16;	// IMP=0x323c4308
- (void)resizeSubviewsWithOldSize:(struct CGSize)fp8;	// IMP=0x323c6708
- (void)resizeWithOldSuperviewSize:(struct CGSize)fp8;	// IMP=0x323c87c0
- (void)setAutoresizesSubviews:(BOOL)fp8;	// IMP=0x323c48cc
- (void)setAutoresizingMask:(unsigned int)fp8;	// IMP=0x323c4900
- (void)setBounds:(struct CGRect)fp8;	// IMP=0x323c4958
- (void)setFrame:(struct CGRect)fp8;	// IMP=0x323c40b0
- (void)setFrame:(struct CGRect)fp8 forFields:(int)fp24;	// IMP=0x323c4724
- (void)setOrigin:(struct CGPoint)fp8;	// IMP=0x323c4a74
- (void)setRotationBy:(float)fp8;	// IMP=0x323c47e4
- (void)setTransform:(struct CGAffineTransform)fp8;	// IMP=0x323c4250
- (struct CGAffineTransform)transform;	// IMP=0x323c4200
@end

